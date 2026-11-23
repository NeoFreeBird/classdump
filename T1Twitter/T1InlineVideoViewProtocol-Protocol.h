//
#ifndef T1InlineVideoViewProtocol_Protocol_h
#define T1InlineVideoViewProtocol_Protocol_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@protocol T1InlineVideoViewProtocol <TAVUIAutoplayable>

@required

@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;

/* required instance methods */
- (void)updateViewModelWith:(id)with account:(id)account scribeContext:(id)context imageFetchHelper:(id)helper displayContext:(long long)context adDisplayLocation:(id)location;
- (void)updateViewModelWith:(id)with account:(id)account scribeContext:(id)context imageFetchHelper:(id)helper displayContext:(long long)context adDisplayLocation:(id)location;
- (void)addBlurredInterstitialView:(id)view;
- (void)tapRecognizerEnabled:(_Bool)enabled;
- (void)setAudioToggleBottomInset:(double)inset;

@optional

@end

#endif /* T1InlineVideoViewProtocol_Protocol_h */
