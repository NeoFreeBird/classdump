//
#ifndef TFSModelServiceConfiguration_h
#define TFSModelServiceConfiguration_h
@import Foundation;

@class NSObject;

@interface TFSModelServiceConfiguration : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 directoryPath;
    B24@0:8@"NSString"16 contextConfigurationForAccountID;
    B24@0:8@"NSString"16 cacheFileRemovalErrorDestination;
}

/* instance methods */
- (id)initWithDirectoryPath:(id)path contextConfigurationForAccountID:(id /* block */)id cacheFileRemovalErrorDestination:(id /* block */)destination;
- (id)initWithDirectoryPath:(id)path contextConfigurationForAccountID:(id /* block */)id;
- (id)init;

@end

#endif /* TFSModelServiceConfiguration_h */
