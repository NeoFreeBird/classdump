//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12MathJaxSwift15DocumentOptions_h
#define _TtC12MathJaxSwift15DocumentOptions_h
@import Foundation;

#include "_TtC12MathJaxSwift10SREOptions.h"
#include "_TtC12MathJaxSwift11A11YOptions.h"
#include "_TtC12MathJaxSwift11MenuOptions.h"
#include "_TtC12MathJaxSwift11SafeOptions.h"
#include "_TtP12MathJaxSwift22DocumentOptionsExports_-Protocol.h"

@class MathJaxSwift.A11YOptions, MathJaxSwift.MenuOptions, MathJaxSwift.SREOptions, MathJaxSwift.SafeOptions, NSArray, NSDictionary, NSObject, NSString, Swift.Bool, _$sSDyS2SG, _$sSDySSSaySSGG, _$sSS, _$sSaySSG, _$sySo7JSValueCSg_A2CtXBSg;

@interface MathJaxSwift.DocumentOptions : NSObject <MathJaxSwift.DocumentOptionsExports> // (Swift)

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
@property (nonatomic, retain) MathJaxSwift.A11YOptions *a11y;
@property (nonatomic, retain) MathJaxSwift.SREOptions *sre;
@property (nonatomic, retain) MathJaxSwift.MenuOptions *menuOptions;
@property (nonatomic, retain) MathJaxSwift.SafeOptions *safeOptions;
@property (nonatomic, retain) id /* block */ enrichError;
@property (nonatomic, retain) id /* block */ compileError;
@property (nonatomic, retain) id /* block */ typesetError;

/* instance methods */
- (id)init;

@end

#endif /* _TtC12MathJaxSwift15DocumentOptions_h */
