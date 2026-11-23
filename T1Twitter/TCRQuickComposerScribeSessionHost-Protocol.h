//
#ifndef TCRQuickComposerScribeSessionHost_Protocol_h
#define TCRQuickComposerScribeSessionHost_Protocol_h
@import Foundation;

@class NSString, TFNTwitterAccount, TFNTwitterComposition;

@protocol TCRQuickComposerScribeSessionHost

@required

@property (readonly, copy, nonatomic) NSString *quickComposerScribeComponent;
@property (readonly, copy, nonatomic) NSString *quickComposerScribePage;
@property (readonly, copy, nonatomic) NSString *quickComposerScribeSurface;
@property (readonly, nonatomic) TFNTwitterAccount *quickComposerScribeAccount;
@property (readonly, nonatomic) TFNTwitterComposition *quickComposerScribeComposition;
@property (readonly, nonatomic) _Bool isQuickComposerBarOnScreen;

/* required instance methods */
- (void)quickComposerScribeSessionBarDidAppear;

@optional

@end

#endif /* TCRQuickComposerScribeSessionHost_Protocol_h */
