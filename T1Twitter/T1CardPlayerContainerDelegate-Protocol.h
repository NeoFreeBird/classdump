//
#ifndef T1CardPlayerContainerDelegate_Protocol_h
#define T1CardPlayerContainerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardPlayerContainerDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)cardPlayerContainerViewCanPlayStreamInline:(id)_inline;

@optional

/* optional instance methods */
- (void)presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (void)presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;

@end

#endif /* T1CardPlayerContainerDelegate_Protocol_h */
