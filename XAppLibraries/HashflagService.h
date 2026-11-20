//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef HashflagService_h
#define HashflagService_h
@import Foundation;

@class NSObject, NSString;

@interface HashflagService : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 filePath;
    @40@0:8:16@24@32 manager;
    @40@0:8:16@24@32 apiCommandLoader;
    @40@0:8:16@24@32 apiCommandContext;
    @40@0:8:16@24@32 fileAccessQueue;
    @40@0:8:16@24@32 lastRefreshedAt;
    @40@0:8:16@24@32 lastEtag;
    @40@0:8:16@24@32 refreshCommand;
}

@property (nonatomic, copy) NSString *lastConfigVersion;

/* instance methods */
- (void)refreshIfOlderThanMaxAge:(double)age accountID:(id)id completion:(id /* block */)completion;
- (void)removeAllHashflags;
- (id)init;

@end

#endif /* HashflagService_h */
