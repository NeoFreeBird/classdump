//
#ifndef T1WebCardViewModel_h
#define T1WebCardViewModel_h
@import Foundation;

#include "T1CardMediaViewModel.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSObject, NSString, TFNTwitterCardContext, UIColor;

@interface T1WebCardViewModel : NSObject

@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> primaryUser;
@property (readonly, nonatomic) long long cardName;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, copy, nonatomic) NSString *destinationDisplayURL;
@property (readonly, nonatomic) NSString *longPressEventType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, nonatomic) UIColor *imageDominantColor;
@property (readonly, nonatomic) T1CardMediaViewModel *mediaViewModel;
@property (readonly, nonatomic) _Bool hasVanityURL;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (void)dealloc;
- (_Bool)shouldLayoutAsCard:(long long)card;
- (double)imageAspectRatio;
- (void)_userDidUpdate:(id)update;

@end

#endif /* T1WebCardViewModel_h */
