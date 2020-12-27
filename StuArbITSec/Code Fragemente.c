/**
 * Single Fea Entry
 */
struct Os2Fea{
    //Flags
    UCHAR ExtendedAttributeFlag;
    //Length of AttriubuteName Field
    UCHAR AttributeNameLengthInBytes; 
    //Length of AttriubuteName Field
    USHORT AttributeNameValueLengthInBytes;
    //Extended attribute name
    UCHAR AttributeName[AttributeNameLengthInBytes + 1];
    //Extended attribute value
    UCHAR AttributeValue[AttributeValueLengthInBytes]; 
}

/**
 * Os2 List Structure
 */
struct Os2FeaList{
    //The total size of the FeaRecords +4 Bytes
    ULONG SizeOfListInBytes; 
    //The total size of the FeaRecords +4 Bytes
    UChar Os2FeaRecords;
}

/**
 * OS2 List Structure (as used in Windows)
 */
struct NtFeaList{
    //offset to the next NtFea record of NtFeaList type
    ULONG NextEntryOffset;
    UCHAR Flags; 
    UCHAR NtFeaNameLength;
    USHORT NtFeaValueLength;
    CHAR NtFeaName[NtFeaNameLength];
    CHAR NtFeaValue[NtFeaValueLength];
}





struct //struct dient nur zur richtigen einfärbung bei copy-paste

SMB_Parameters
{
    UCHAR WordCount;

struct //struct dient nur zur richtigen einfärbung bei copy-paste

    Words
    {
        UCHAR AndXCommand;
        UCHAR AndXReserved;
        USHORT AndXOffset;
        USHORT MaxBufferSize;
        USHORT MaxMpxCount;
        USHORT VcNumber;
        ULONG SessionKey;
        USHORT OEMPasswordLen;
        ULONG Reserved;
        ULONG Capabilities;
    }
}
struct //struct dient nur zur richtigen einfärbung bei copy-paste
SMB_DATA
{
    USHORT ByteCount;
    struct //struct dient nur zur richtigen einfärbung bei copy-paste
    Bytes{
        UCHAR OEMPassword[];
        UCHAR UnicodePassword[];
        UCHAR Pad[];
        SMB_STRING AccountName[];
        SMB_STRING PrimaryName[];
        SMB_STRING NativeOS[];
        SMB_STRING NativeLanMan[];
    }
}



struct //struct dient nur zur richtigen einfärbung bei copy-paste

SMB_Parameters
{
    UCHAR WordCount;
    struct //struct dient nur zur richtigen einfärbung bei copy-paste    
    Words
    {
        UCHAR AndXCommand;
        UCHAR AndXReserved;
        USHORT AndXOffset;
        USHORT MaxBufferSize;
        USHORT MaxMpxCount;
        USHORT VcNumber;
        ULONG SessionKey;
        USHORT SecurityBlobLen;
        ULONG Reserved;
        ULONG Capabilities;
    }
}
struct //struct dient nur zur richtigen einfärbung bei copy-paste
SMB_DATA
{
    USHORT ByteCount;
    struct //struct dient nur zur richtigen einfärbung bei copy-paste
    Bytes{
        UCHAR SecurityBlob[SecurityBlobLength];
        SMB_STRING NativeOS[];
        SMB_STRING NativeLanMan[];
    }
}


/**
 * 
 */