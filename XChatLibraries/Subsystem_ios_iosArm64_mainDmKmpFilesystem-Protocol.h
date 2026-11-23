//
#ifndef Subsystem_ios_iosArm64_mainDmKmpFilesystem_Protocol_h
#define Subsystem_ios_iosArm64_mainDmKmpFilesystem_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDmKmpFilesystem

@required

/* required instance methods */
- (void)deleteAllFilesWithCompletionHandler:(id /* block */)handler;
- (void)deleteAllFilesWithCompletionHandler:(id /* block */)handler;
- (void)deleteAllFilesFolderLocation:(id)location completionHandler:(id /* block */)handler;
- (void)deleteAllFilesFolderLocation:(id)location completionHandler:(id /* block */)handler;
- (void)deleteFileFileLocation:(id)location completionHandler:(id /* block */)handler;
- (void)deleteFileFileLocation:(id)location completionHandler:(id /* block */)handler;
- (void)getLocalUriIfFileExistsFileLocation:(id)location completionHandler:(id /* block */)handler;
- (void)getLocalUriIfFileExistsFileLocation:(id)location completionHandler:(id /* block */)handler;
- (id)getSinkFileLocation:(id)location append:(_Bool)append;
- (id)getSinkFileLocation:(id)location append:(_Bool)append;
- (id)getSourceFileLocation:(id)location;
- (id)getSourceFileLocation:(id)location;
- (id)getSourceMedia:(id)media;
- (id)getSourceMedia:(id)media;
- (void)listFilesInFolderFolderLocation:(id)location completionHandler:(id /* block */)handler;
- (void)listFilesInFolderFolderLocation:(id)location completionHandler:(id /* block */)handler;
- (void)moveFrom:(id)from to:(id)to completionHandler:(id /* block */)handler;
- (void)moveFrom:(id)from to:(id)to completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDmKmpFilesystem_Protocol_h */
