//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileDisplayContentProvider_h
#define T1ProfileDisplayContentProvider_h
@import Foundation;

#include "T1ProfileContentMainEntry.h"
#include "T1ProfileDisplayContentProviderDelegate-Protocol.h"
#include "T1ProfileViewModel-Protocol.h"

@class NSArray, NSMutableArray, NSObject, NSString, TFNTwitterAccount;

@interface T1ProfileDisplayContentProvider : NSObject

@property (retain, nonatomic) T1ProfileContentMainEntry *defaultMainContentEntry;
@property (retain, nonatomic) id <T1ProfileViewModel> viewModel;
@property (weak, nonatomic) id <T1ProfileDisplayContentProviderDelegate> delegate;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) _Bool canBecomeCurrent;
@property (readonly, nonatomic) _Bool shouldAllowScrollingWhenCurrent;
@property (readonly, nonatomic) _Bool shouldDisableContentPaddingWhenCurrent;
@property (readonly, nonatomic) _Bool shouldShowUserDataWhenCurrent;
@property (readonly, nonatomic) _Bool shouldShowUserImagesWhenCurrent;
@property (readonly, nonatomic) NSArray *contentMainEntries;
@property (retain, nonatomic) NSMutableArray *groupActiveIndices;
@property (readonly, nonatomic) NSArray *contentSubheaderEntries;
@property (readonly, nonatomic) NSString *scribePage;
@property (readonly, nonatomic) NSString *scribeSection;
@property (nonatomic) unsigned long long initialTabIndex;

/* instance methods */
- (id)initWithAccount:(id)account viewModel:(id)model delegate:(id)delegate;
- (void)dealloc;
- (id)init;
- (double)modalContentHeightExpanded:(_Bool)expanded defaultValue:(double)value;
- (id)generateDefaultMainViewController;
- (void)removeCachedViewControllersIfNeeded;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (void)setNeedsMainUpdate;
- (void)setNeedsSubheaderUpdate;
- (void)setNeedsModalContentHeightUpdate;
- (id)viewController;
- (void)_profileViewModelDidInvalidate:(id)invalidate;

@end

#endif /* T1ProfileDisplayContentProvider_h */
