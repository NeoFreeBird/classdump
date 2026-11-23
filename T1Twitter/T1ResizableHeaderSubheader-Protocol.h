//
#ifndef T1ResizableHeaderSubheader_Protocol_h
#define T1ResizableHeaderSubheader_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ResizableHeaderSubheader <NSObject>

@required

@property (nonatomic, copy) id subheaderInfo;
@property (nonatomic, copy) id /* block */ preferredHeightCheckBlock;

/* required instance methods */
- (double)preferredHeight;

@optional

/* optional instance methods */
- (_Bool)wantsPreferredHeightAppliedAsIs;

@end

#endif /* T1ResizableHeaderSubheader_Protocol_h */
