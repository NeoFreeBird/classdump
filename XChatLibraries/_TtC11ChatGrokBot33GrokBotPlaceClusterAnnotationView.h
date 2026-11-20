//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot33GrokBotPlaceClusterAnnotationView_h
#define _TtC11ChatGrokBot33GrokBotPlaceClusterAnnotationView_h
@import Foundation;

#include "MKAnnotation-Protocol.h"

@class MKAnnotationView, _$sSo7UIColorC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotPlaceClusterAnnotationView : MKAnnotationView { // (Swift)
    /* instance variables */
    __C.UIColor fillColor;
    __C.UILabel countLabel;
}

@property (nonatomic, retain) id <MKAnnotation> annotation;

/* instance methods */
- (id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForDisplay;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot33GrokBotPlaceClusterAnnotationView_h */
