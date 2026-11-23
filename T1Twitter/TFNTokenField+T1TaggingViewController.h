//
#ifndef TFNTokenField_T1TaggingViewController_h
#define TFNTokenField_T1TaggingViewController_h
@import Foundation;

#include "T1TaggingTableView.h"
#include "T1TaggingViewControllerDelegate-Protocol.h"
#include "TFNTokenFieldDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSMutableArray, NSString, TCRAutocompleteResultsController, TFNTwitterAccount, TFNViewController, TFSTimer, TTSUserTypeaheadSearchView, UIScrollView, XNAVConfiguration;

@interface TFNTokenField (T1TaggingViewController)

/* instance methods */
- (void)reloadTokensFromTags:(id)tags;

@end

#endif /* TFNTokenField_T1TaggingViewController_h */
