//
#ifndef T1MessageMeCardViewModel_h
#define T1MessageMeCardViewModel_h
@import Foundation;

@class NSObject, NSString, TFCCardData, TFNTwitterCardContext;

@interface T1MessageMeCardViewModel : NSObject

@property (retain, nonatomic) TFCCardData *cardData;
@property (retain, nonatomic) NSString *cta;
@property (nonatomic) _Bool showAdaptiveMediaLayout;
@property (nonatomic) _Bool isRecipientEqualToAuthor;
@property (retain, nonatomic) TFNTwitterCardContext *cardContext;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (id)_messageMeCTALabelWithKey:(id)key;

@end

#endif /* T1MessageMeCardViewModel_h */
