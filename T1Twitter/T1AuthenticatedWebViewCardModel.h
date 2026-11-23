//
#ifndef T1AuthenticatedWebViewCardModel_h
#define T1AuthenticatedWebViewCardModel_h
@import Foundation;

@class NSObject, NSString, TFCImageSpec, TFNTwitterAuthenticatedWebViewModel, TFNTwitterCardContext;

@interface T1AuthenticatedWebViewCardModel : NSObject

@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (retain, nonatomic) TFNTwitterAuthenticatedWebViewModel *webViewModel;
@property (retain, nonatomic) TFCImageSpec *imageData;
@property (readonly, nonatomic) NSString *cardName;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *byline;
@property (readonly, nonatomic) NSString *callToAction;
@property (readonly, nonatomic) NSString *badgeText;
@property (readonly, nonatomic) NSString *imageURLString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;
@property (readonly, nonatomic) _Bool promotion;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (id)_createCardImageSpec;
- (_Bool)isPromotion;

@end

#endif /* T1AuthenticatedWebViewCardModel_h */
