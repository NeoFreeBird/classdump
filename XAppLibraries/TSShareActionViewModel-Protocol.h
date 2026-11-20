//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TSShareActionViewModel_Protocol_h
#define TSShareActionViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol TSShareActionViewModel <NSObject>

@required

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NSString *imageName;
@property (nonatomic, readonly) NSString *identifier;

/* required instance methods */
- (void)performAction;

@optional

@end

#endif /* TSShareActionViewModel_Protocol_h */
