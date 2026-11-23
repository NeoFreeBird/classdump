//
#ifndef T1CardImageView_h
#define T1CardImageView_h
@import Foundation;

#include "TUCImageView-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, UIColor, UIImage, UIImageView;
@protocol TUCImageViewLoadDelegate;

@interface T1CardImageView : UIImageView <TUIImageViewFetchHelperDelegate, TUCImageView>

@property (nonatomic) _Bool isDominantBackgroundColorEnabled;
@property (retain, nonatomic) UIColor *dominantBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIImage *image;
@property (weak, nonatomic) id <TUCImageViewLoadDelegate> loadDelegate;

/* instance methods */
- (id)init;
- (void)setBackgroundColor:(id)color;
- (void)setImageWithMediaEntity:(id)entity imagePipeline:(id)pipeline;
- (void)reset;
- (id)_t1_loadFailureImage;
- (id)_t1_missingImage;
- (void)tui_fetchHelper:(id)helper didFailToLoadImageWithError:(id)error;
- (void)tui_fetchHelper:(id)helper readyToConfigureView:(id)view state:(long long)state;

@end

#endif /* T1CardImageView_h */
