//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIVoiceDockContainer_Protocol_h
#define TUIVoiceDockContainer_Protocol_h
@import Foundation;

#include "TUIVoiceDockableContent-Protocol.h"

@class UIView;

@protocol TUIVoiceDockContainer

@required

@property (retain, nonatomic) UIView<TUIVoiceDockableContent> *contentView;

/* required instance methods */
- (void)voiceDockContentDidInvalidateSize:(id)size;

@optional

@end

#endif /* TUIVoiceDockContainer_Protocol_h */
