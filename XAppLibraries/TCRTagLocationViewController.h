//
#ifndef TCRTagLocationViewController_h
#define TCRTagLocationViewController_h
@import Foundation;

#include "TCRTagLocationView.h"
#include "TCRTagLocationViewDelegate-Protocol.h"

@class NSArray, NSString, TFSTwitterPlace, UIViewController;
@protocol TCRTagLocationViewControllerDelegate;

@interface TCRTagLocationViewController : UIViewController <TCRTagLocationViewDelegate>

@property (retain, nonatomic) TCRTagLocationView *tagLocationView;
@property (weak, nonatomic) id <TCRTagLocationViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *suggestedPlaces;
@property (nonatomic) _Bool shouldShowAdditionalPOISuggestions;
@property (retain, nonatomic) TFSTwitterPlace *selectedPlace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)setFilteredPlaces:(id)places;
- (void)_tcr_updateFilteredPlaces;
- (void)composeTagLocationViewDidTapGeoButton:(id)button;
- (void)composeTagLocationViewDidTapSearchButton:(id)button;
- (void)composeTagLocationView:(id)view didTapButtonWithPlace:(id)place index:(unsigned long long)index;
- (_Bool)showAdditionalPOISuggestionsForComposeTagLocationView:(id)view;

@end

#endif /* TCRTagLocationViewController_h */
