//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CashtagAttachmentsModalViewController_h
#define CashtagAttachmentsModalViewController_h
@import Foundation;

#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "UITableViewDragDelegate-Protocol.h"
#include "UITableViewDropDelegate-Protocol.h"

@class TFNViewController;

@interface CashtagAttachmentsModalViewController : TFNViewController <UITableViewDropDelegate, UITableViewDragDelegate, UITableViewDelegate, UITableViewDataSource> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *maxIncluded;
    NSNumber"16@0:8 *onChange;
    NSNumber"16@0:8 *didFireOnDismiss;
    NSNumber"16@0:8 *includedSectionHeader;
    NSNumber"16@0:8 *availableSectionHeader;
    NSNumber"16@0:8 *included;
    NSNumber"16@0:8 *available;
    NSNumber"16@0:8 *isAvailableExpanded;
    NSNumber"16@0:8 *swipedSmartTag;
    NSNumber"16@0:8 *displayStyle;
    NSNumber"16@0:8 *$__lazy_storage_$_tableView;
    NSNumber"16@0:8 *$__lazy_storage_$_headerLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_sizePickerView;
}

@property (nonatomic, copy) id /* block */ onDismiss;
@property (nonatomic, copy) id /* block */ onDisplayStyleChanged;

/* instance methods */
- (_Bool)tableView:(id)view canHandleDropSession:(id)session;
- (id)tableView:(id)view dropSessionDidUpdate:(id)update withDestinationIndexPath:(id)path;
- (void)tableView:(id)view performDropWithCoordinator:(id)coordinator;
- (id)tableView:(id)view itemsForBeginningDragSession:(id)session atIndexPath:(id)path;
- (id)tableView:(id)view dragPreviewParametersForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)initWithCashtagAttachments:(id)attachments maxIncluded:(long long)included displayStyle:(long long)style account:(id)account onChange:(id /* block */)change;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)handleClose;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* CashtagAttachmentsModalViewController_h */
