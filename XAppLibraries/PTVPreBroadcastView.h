//
#ifndef PTVPreBroadcastView_h
#define PTVPreBroadcastView_h
@import Foundation;

#include "PTVBasePreBroadcastView.h"

@interface PTVPreBroadcastView : PTVBasePreBroadcastView

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame initialTitle:(id)title chatType:(unsigned long long)type hasShareTwitterOption:(_Bool)option shareTwitterEnabled:(_Bool)enabled hasShareLocationOption:(_Bool)option shareLocationEnabled:(_Bool)enabled cameFromTwitter:(_Bool)twitter twitterUsername:(id)username sourceName:(id)name hasPrivateBroadcastOption:(_Bool)option isExternalEncoderBroadcast:(_Bool)broadcast;
- (void)handleDoubleTapGesture:(id)gesture;
- (void)backButtonPressed;
- (id)sePreBroadcastViewDelegate;

@end

#endif /* PTVPreBroadcastView_h */
