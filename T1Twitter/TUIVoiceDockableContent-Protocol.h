//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIVoiceDockableContent_Protocol_h
#define TUIVoiceDockableContent_Protocol_h
@import Foundation;

#include "TUIVoiceDockContainer-Protocol.h"

@class UIView;

@protocol TUIVoiceDockableContent

@required

@property (weak, nonatomic) UIView<TUIVoiceDockContainer> *dockContainer;
@property (readonly, nonatomic) double minimumHeight;

@optional

@end

#endif /* TUIVoiceDockableContent_Protocol_h */
