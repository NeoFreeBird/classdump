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
