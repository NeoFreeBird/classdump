//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterImageCategoryTypePathingPair_h
#define TFSTwitterImageCategoryTypePathingPair_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterImageCategoryTypePathingPair : NSObject {
    /* instance variables */
    NSString *_pathPrefix;
    long long _type;
}

/* instance methods */
- (id)initWithType:(long long)type pathPrefix:(id)prefix;

@end

#endif /* TFSTwitterImageCategoryTypePathingPair_h */
