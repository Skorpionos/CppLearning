#include "read_options.h"

bool ReadOptions(int argc, char** argv, std::string& fileName, dump::DumperSettings& settings)
{
    namespace po = boost::program_options;
    boost::program_options::options_description desc("Options");
    std::string addressType;
    desc.add_options()
            ("help", "help")
            ("begin", boost::program_options::value(&settings.begin), "start from offset")
            ("end", boost::program_options::value(&settings.end), "finish to offset")
            ("size", boost::program_options::value(&settings.size), "count of bytes to display")
            ("group", boost::program_options::value(&settings.columnCount), "number of groups")
            ("bytes", boost::program_options::value(&settings.bytesInGroup), "number of bytes in one group")
            ("offset", boost::program_options::value(&addressType), "offset format (hex, dec, both, none)")
            ("detailed", boost::program_options::value(&settings.detailedOffset), "detailed format for offset (actual for --fromstart)")
            ("dump", boost::program_options::value(&settings.isShowDump), "show dump column")
            ("asc", boost::program_options::value(&settings.isShowAscii), "show ascii column")
            ("debug", boost::program_options::value(&settings.isShowDebug), "show degug information")
            ("space", boost::program_options::value(&settings.isSpaceBetweenAsciiBytes), "set space between ascii groups")
            ("spacedump", boost::program_options::value(&settings.isSpaceBetweenDumpBytes), "set space between dump groups")
            ("char", boost::program_options::value(&settings.placeHolder), "placeholder for non visible symbols")
            ("zero", boost::program_options::value(&settings.zeroPlaceHolder), "placeholder for zero")
            ("widechar", boost::program_options::value(&settings.widePlaceHolder), "placeholder for invisible symbols in wide-char words")
            ("wide", boost::program_options::value(&settings.useWideChar), "use wide-char mode for words")
            ("array", boost::program_options::value(&settings.IsCArray), "generate c-array (0x00, ...)")
            ("ladder", boost::program_options::value(&settings.ladder), "use intend for separate words")
            ("newline", boost::program_options::value(&settings.newLine), "every visible word starts with new line")
            ("fromstart", boost::program_options::value(&settings.useRelativeAddress), "set offset for --begin as offset=0")
            ("key", boost::program_options::value(&settings.key), "key (string value) for found")
            ("hkey", boost::program_options::value(&settings.hkey), "key (hex values) for found")
            ("from", boost::program_options::value(&settings.from), "begin from first key (hex value)")
            ("till", boost::program_options::value(&settings.till), "finish with last key (hex value)")
            ("skip", boost::program_options::value(&settings.skipLines), "skip lines where key is absent")
            ("before", boost::program_options::value(&settings.countBytesBeforeKey), "count lines before key (for skip mode)")
            ("after", boost::program_options::value(&settings.countBytesAfterKey), "count lines after key (for skip mode)")
//            ("length", boost::program_options::value(&settings.length), "min symbols in word for display")
//            ("single", boost::program_options::value(&settings.single), "delete first non visible symbols in every group")
//            ("compress", boost::program_options::value(&settings.compress), "replace following non visible symbols to one")
            ;
    try
    {
        boost::program_options::variables_map vm;
        store(boost::program_options::parse_command_line(argc, argv, desc), vm);
        notify(vm);

        if (vm.count("offset"))
            settings.offset = dump::GetOffsetType(addressType);

        if (vm.count("help") || argc < 2 || settings.offset == dump::OffsetTypes::Unknown)
        {
            std::cout << desc << "\n";
            return false;
        }
        settings.isShowOffset = settings.offset != dump::OffsetTypes::None;

        if (settings.size !=0  && settings.end == 0)
            settings.end = settings.begin + settings.size - 1;

//        if (!vm.count("zero") )
//            settings.zeroPlaceHolder = settings.placeHolder;

        if (settings.IsCArray)
        {
//            settings.isShowAscii = false;
            // settings.isShowOffset = false;
        }

        if (settings.newLine || settings.ladder)
            settings.isSpaceBetweenDumpBytes = false;

        fileName = argv[1];

        settings.bytesInLine = settings.columnCount * settings.bytesInGroup;
    }

    catch (...)
    {
        std::cout << desc << "\n";
        return false;
    }

    return true;
}