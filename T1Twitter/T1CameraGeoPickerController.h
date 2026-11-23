//
#ifndef T1CameraGeoPickerController_h
#define T1CameraGeoPickerController_h
@import Foundation;

#include "T1CameraGeoPickerControllerDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, TFNViewController, TFSTwitterLocation, TFSTwitterPlace, UIScrollView;

@interface T1CameraGeoPickerController : TFNViewController <UITableViewDelegate, UITableViewDataSource> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *tableView;
    NSNumber"16@0:8 *tableViewDataSource;
    NSNumber"16@0:8 *noLocationsView;
    NSNumber"16@0:8 *entryPointView;
    NSNumber"16@0:8 *selectionState;
}

@property (nonatomic, retain) TFSTwitterPlace *defaultPlace;
@property (nonatomic, retain) TFSTwitterLocation *targetLocation;
@property (nonatomic, copy) NSArray *places;
@property (nonatomic, copy) NSArray *placesAttribution;
@property (nonatomic, weak) id <T1CameraGeoPickerControllerDelegate> cameraGeoPickerControllerDelegate;
@property (nonatomic, retain) TFSTwitterPlace *selectedPlace;
@property (nonatomic, retain) TFSTwitterLocation *selectedLocation;
@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)retryButtonTappedWithSender:(id)sender;
- (void)closeButtonTapped;
- (id)createEntryPointButton;
- (void)selectWithItem:(id)item;
- (long long)numberOfSectionsInTableView:(id)view;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1CameraGeoPickerController_h */
