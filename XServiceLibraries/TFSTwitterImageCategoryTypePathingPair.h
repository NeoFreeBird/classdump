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
