//
#ifndef _TtC6Lottie7Archive_h
#define _TtC6Lottie7Archive_h
@import Foundation;

@class Lottie.Archive.AccessMode, Lottie.Archive.EndOfCentralDirectoryRecord, Lottie.Archive.MemoryFile ?, Lottie.Archive.ZIP64EndOfCentralDirectory ?, _$s10Foundation3URLVMn, _$sSS10FoundationE8EncodingVMn ?, _$sSp -> __C.__sFILE, _TtCs12_SwiftObject;

@interface Lottie.Archive : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL url;
    Lottie.Archive.AccessMode accessMode;
    Lottie.Archive.EndOfCentralDirectoryRecord endOfCentralDirectoryRecord;
    Lottie.Archive.ZIP64EndOfCentralDirectory ? zip64EndOfCentralDirectory;
    nominal type descriptor for (extension in Foundation):Swift.String.Encoding ? pathEncoding;
    Lottie.Archive.MemoryFile ? memoryFile;
    Swift.UnsafeMutablePointer -> __C.__sFILE archiveFile;
}

@end

#endif /* _TtC6Lottie7Archive_h */
