//
#ifndef _TtC11ChatGrokBot29GrokBotHotelTagAnnotationView_h
#define _TtC11ChatGrokBot29GrokBotHotelTagAnnotationView_h
@import Foundation;

#include "MKAnnotation-Protocol.h"

@class MKAnnotationView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotHotelTagAnnotationView : MKAnnotationView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    __C.UIView tagView;
}

@property (nonatomic, retain) id <MKAnnotation> annotation;

/* instance methods */
- (id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForDisplay;

@end

#endif /* _TtC11ChatGrokBot29GrokBotHotelTagAnnotationView_h */
