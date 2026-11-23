//
#ifndef TSShareActionViewModel_Protocol_h
#define TSShareActionViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol TSShareActionViewModel <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) NSString *identifier;

/* required instance methods */
- (void)performAction;

@optional

@end

#endif /* TSShareActionViewModel_Protocol_h */
