//
#ifndef _TtC14T1TwitterSwiftP33_0E362F73F62C2B4ADC27D6DA49E3D26D61StandardEmbeddedCardViewAutoplayPlayerControllerViewContainer_h
#define _TtC14T1TwitterSwiftP33_0E362F73F62C2B4ADC27D6DA49E3D26D61StandardEmbeddedCardViewAutoplayPlayerControllerViewContainer_h
@import Foundation;

#include "TAVAutoplayViewContainer-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class NSObject, UIImage, UIView;

@interface T1TwitterSwift.(StandardEmbeddedCardViewAutoplayPlayerControllerViewContainer in _0E362F73F62C2B4ADC27D6DA49E3D26D) : NSObject <TAVAutoplayViewContainer> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *cardContainerView;
    NSNumber"16@0:8 *inlineMediaView;
}

@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwiftP33_0E362F73F62C2B4ADC27D6DA49E3D26D61StandardEmbeddedCardViewAutoplayPlayerControllerViewContainer_h */
