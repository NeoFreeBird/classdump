//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOutOfContextTesterLoadingAdMetadata_h
#define GADOutOfContextTesterLoadingAdMetadata_h
@import Foundation;

@class NSObject;

@interface GADOutOfContextTesterLoadingAdMetadata : NSObject

@property (retain, nonatomic) id loadingObject;
@property (copy, nonatomic) id /* block */ completionHandler;

/* instance methods */

@end

#endif /* GADOutOfContextTesterLoadingAdMetadata_h */
