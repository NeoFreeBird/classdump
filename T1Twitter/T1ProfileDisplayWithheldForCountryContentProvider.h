//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileDisplayWithheldForCountryContentProvider_h
#define T1ProfileDisplayWithheldForCountryContentProvider_h
@import Foundation;

#include "T1ProfileContentSubheaderEntry.h"
#include "T1ProfileDisplayContentProvider.h"
#include "T1ProfileWithheldNotice.h"

@class NSString;

@interface T1ProfileDisplayWithheldForCountryContentProvider : T1ProfileDisplayContentProvider

@property (retain, nonatomic) T1ProfileContentSubheaderEntry *viewingOwnProfileSubheaderEntry;
@property (readonly, nonatomic) T1ProfileWithheldNotice *notice;
@property (readonly, nonatomic) NSString *title;

/* instance methods */
- (_Bool)canBecomeCurrent;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (_Bool)shouldShowUserImagesWhenCurrent;
- (id)scribeSection;
- (void)removeCachedViewControllersIfNeeded;
- (id)generateDefaultMainViewController;
- (id)contentSubheaderEntries;

@end

#endif /* T1ProfileDisplayWithheldForCountryContentProvider_h */
