//
#ifndef T1CardClassicCallToActionModel_h
#define T1CardClassicCallToActionModel_h
@import Foundation;

@class NSObject, NSString, TFCCardData;

@interface T1CardClassicCallToActionModel : NSObject

@property (retain, nonatomic) TFCCardData *cardData;
@property (readonly, copy, nonatomic) NSString *callToActionText;
@property (readonly, nonatomic) NSString *callToActionEventType;

/* instance methods */
- (id)initWithCardData:(id)data;
- (_Bool)_isAppInstallable;
- (_Bool)_isAppOpenable;

@end

#endif /* T1CardClassicCallToActionModel_h */
