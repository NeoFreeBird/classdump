//
#ifndef _TtC12MarkdownView15DocumentOptions_h
#define _TtC12MarkdownView15DocumentOptions_h
@import Foundation;

#include "_TtC12MarkdownView10SREOptions.h"
#include "_TtC12MarkdownView11A11YOptions.h"
#include "_TtC12MarkdownView11MenuOptions.h"
#include "_TtC12MarkdownView11SafeOptions.h"
#include "_TtP12MarkdownView22DocumentOptionsExports_-Protocol.h"

@class MarkdownView.A11YOptions, MarkdownView.MenuOptions, MarkdownView.SREOptions, MarkdownView.SafeOptions, NSArray, NSDictionary, NSObject, NSString, Swift.Bool, _$sSDyS2SG, _$sSDySSSaySSGG, _$sSS, _$sSaySSG, _$sySo7JSValueCSg_A2CtXBSg;

@interface MarkdownView.DocumentOptions : NSObject <MarkdownView.DocumentOptionsExports> // (Swift)

@property (nonatomic, copy) NSArray *skipHtmlTags;
@property (nonatomic, copy) NSDictionary *includeHtmlTags;
@property (nonatomic, copy) NSString *ignoreHtmlClass;
@property (nonatomic, copy) NSString *processHtmlClass;
@property (nonatomic) _Bool enableEnrichment;
@property (nonatomic) _Bool enableComplexity;
@property (nonatomic) _Bool makeCollapsible;
@property (nonatomic) _Bool identifyCollapsible;
@property (nonatomic) _Bool enableExplorer;
@property (nonatomic) _Bool enableAssistiveMml;
@property (nonatomic) _Bool enableMenu;
@property (nonatomic, copy) NSDictionary *annotationTypes;
@property (nonatomic, retain) MarkdownView.A11YOptions *a11y;
@property (nonatomic, retain) MarkdownView.SREOptions *sre;
@property (nonatomic, retain) MarkdownView.MenuOptions *menuOptions;
@property (nonatomic, retain) MarkdownView.SafeOptions *safeOptions;
@property (nonatomic, retain) id /* block */ enrichError;
@property (nonatomic, retain) id /* block */ compileError;
@property (nonatomic, retain) id /* block */ typesetError;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MarkdownView15DocumentOptions_h */
