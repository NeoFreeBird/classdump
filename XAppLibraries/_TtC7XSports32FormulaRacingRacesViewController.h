//
#ifndef _TtC7XSports32FormulaRacingRacesViewController_h
#define _TtC7XSports32FormulaRacingRacesViewController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class UIViewController, XDiffableCollection.DiffableView, XSports.Athlete _$s_So16UIViewControllerCtcSg, XSports.FormulaRacingRacesStore, XSports.FormulaRacingWeekendCarouselView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSa -> XSports.FormulaRacingWeekendCard, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSS_ XSports.FormulaRacingRaceState XSports.SportsGamePage _$sSgtcSg, _$sSo6UIViewC, _$sSo7CALayerC, _$sSo7UILabelC;

@interface XSports.FormulaRacingRacesViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    XSports.FormulaRacingRacesStore store;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIViewControllerSwift.String first-element-marker  XSports.FormulaRacingRaceState XSports.SportsGamePage _$sSgtcSg openRace;
    XSports.FormulaRacingWeekendCarouselView weekendsView;
    Swift.Array -> XSports.FormulaRacingWeekendCard weekends;
    Swift.String? renderedRaceID;
    Swift.String? selectedWeekendID;
    nominal type descriptor for CoreGraphics.CGFloat carouselPanStartOffset;
    XDiffableCollection.DiffableView diffableView;
    __C.UIView listContainer;
    __C.CALayer listMask;
    __C.CALayer listMaskTop;
    __C.CAGradientLayer listMaskFade;
    __C.CALayer listMaskBody;
    __C.UILabel messageLabel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    XSports.Athlete _$s_So16UIViewControllerCtcSg presentAthlete;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)didPanCarousel:(id)carousel;
- (void)handleRefresh;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports32FormulaRacingRacesViewController_h */
