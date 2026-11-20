//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventPromptViewController_h
#define T1LiveEventPromptViewController_h
@import Foundation;

#include "TFNPromptDataSource-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSString, TFNPromptContentViewSpec, TFNPromptImageSpec, TFNPromptTextSpec, TFNPromptViewController, TFNTwitterAccount, UIImage;

@interface T1LiveEventPromptViewController : TFNPromptViewController <TFNPromptDataSource>

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (nonatomic) unsigned long long promptType;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> authorUser;
@property (copy, nonatomic) id /* block */ proceedBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) TFNPromptImageSpec *imageSpec;
@property (readonly, nonatomic) long long promptLayout;
@property (readonly, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (readonly, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (readonly, nonatomic) NSArray *buttonSpecs;
@property (readonly, nonatomic) _Bool showDismissOption;
@property (readonly, nonatomic) id /* block */ dismissOptionAction;
@property (readonly, nonatomic) _Bool showLogo;
@property (readonly, nonatomic) Class promptViewClass;
@property (readonly, nonatomic) id /* block */ promptViewProvider;
@property (readonly, nonatomic) id /* block */ impressionAction;
@property (readonly, nonatomic) _Bool excludeFromVDLLeftAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account promptType:(unsigned long long)type authorUser:(id)user;
- (_Bool)accessibilityPerformEscape;
- (id)_t1_buttonSpecWithTitle:(id)title style:(long long)style block:(id /* block */)block;

@end

#endif /* T1LiveEventPromptViewController_h */
