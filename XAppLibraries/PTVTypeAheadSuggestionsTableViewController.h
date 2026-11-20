//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVTypeAheadSuggestionsTableViewController_h
#define PTVTypeAheadSuggestionsTableViewController_h
@import Foundation;

#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVTableViewController.h"
#include "PTVTypeAheadSuggestionsTableViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, NSTimer;

@interface PTVTypeAheadSuggestionsTableViewController : PTVTableViewController {
    /* instance variables */
    PTVTypeAheadSuggestionsTableViewController *_weakSelf;
    id <PTVTypeAheadSuggestionsTableViewControllerDelegate> _delegate;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    NSString *_inputText;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedHashtagRange;
    unsigned long long _nHashtagsSuggested;
    NSMutableArray *_hashtagsSelected;
}

@property (retain, nonatomic) NSTimer *inputDelayTimer;

/* instance methods */
- (void)load:(long long)load;
- (id)context;
- (_Bool)shouldLoad;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:(id)scroll;
- (void)stateChanged;
- (long long)numberOfDataRowsInSection:(long long)section;
- (double)heightForDataRowAtIndexPath:(id)path;
- (id)dataCellForRowAtIndexPath:(id)path;
- (void)didSelectDataRowAtIndexPath:(id)path;
- (id)initWithLoggedInUser:(id)user delegate:(id)delegate;
- (void)setInputText:(id)text withSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setInputText:(id)text;
- (void)clearInputTextAndSuggestions;
- (id)typeAheadAnalytics;
- (void)trackSuggestedHashtag:(id)hashtag;
- (void)trackNewHashtagSuggestions:(unsigned long long)suggestions;
- (_Bool)doesSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range representValidCursorPositionForInputText:(id)text;
- (_Bool)doesSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range intersectHashtag:(struct _NSRange { unsigned long long x0; unsigned long long x1; })hashtag;

@end

#endif /* PTVTypeAheadSuggestionsTableViewController_h */
