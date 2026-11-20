//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNEmptyStateImageProvider_h
#define TFNEmptyStateImageProvider_h
@import Foundation;

@class NSObject;

@interface TFNEmptyStateImageProvider : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 hasKnownInvalidImage;
}

@property (nonatomic, copy) id /* block */ imageFetchClosure;

/* instance methods */
- (id)initWithImageFetchClosure:(id /* block */)closure;
- (id)init;

@end

#endif /* TFNEmptyStateImageProvider_h */
