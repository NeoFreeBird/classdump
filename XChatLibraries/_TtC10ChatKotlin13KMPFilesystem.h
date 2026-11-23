//
#ifndef _TtC10ChatKotlin13KMPFilesystem_h
#define _TtC10ChatKotlin13KMPFilesystem_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainDmKmpFilesystem-Protocol.h"

@class Subsystem_ios_iosArm64_mainDmKmpFileLocation, Subsystem_ios_iosArm64_mainDmKmpFolderLocation, _$sSo13NSFileManagerC, _TtCs12_SwiftObject;

@interface ChatKotlin.KMPFilesystem : Swift._SwiftObject <Subsystem_ios_iosArm64_mainDmKmpFilesystem> { // (Swift)
    /* instance variables */
    __C.NSFileManager fileManager;
}

/* instance methods */
- (void)getLocalUriIfFileExistsFileLocation:(Subsystem_ios_iosArm64_mainDmKmpFileLocation *)location completionHandler:(id /* block */)handler;
- (id)getSinkFileLocation:(id)location append:(_Bool)append;
- (id)getSourceMedia:(id)media;
- (id)getSourceFileLocation:(id)location;
- (void)deleteFileFileLocation:(Subsystem_ios_iosArm64_mainDmKmpFileLocation *)location completionHandler:(id /* block */)handler;
- (void)deleteAllFilesFolderLocation:(Subsystem_ios_iosArm64_mainDmKmpFolderLocation *)location completionHandler:(id /* block */)handler;
- (void)deleteAllFilesWithCompletionHandler:(id /* block */)handler;
- (void)listFilesInFolderFolderLocation:(Subsystem_ios_iosArm64_mainDmKmpFolderLocation *)location completionHandler:(id /* block */)handler;
- (void)moveFrom:(Subsystem_ios_iosArm64_mainDmKmpFileLocation *)from to:(Subsystem_ios_iosArm64_mainDmKmpFileLocation *)to completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin13KMPFilesystem_h */
