//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift16RuntimeContainer_h
#define _TtC14T1TwitterSwift16RuntimeContainer_h
@import Foundation;

@class NSObject, _$sSDySS T1TwitterSwift.JetXRuntime;

@interface T1TwitterSwift.RuntimeContainer : NSObject { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.JetXRuntime runtimeCache;
}

/* class methods */
+ (void)warmWithPath:(id)path account:(id)account;
+ (void)warmFromCache;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift16RuntimeContainer_h */
