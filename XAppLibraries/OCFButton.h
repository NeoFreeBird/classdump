//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFButton_h
#define OCFButton_h
@import Foundation;

#include "OCFButtonAppearance.h"
#include "OCFNavigationLink.h"

@class NSObject;

@interface OCFButton : NSObject

@property (readonly, nonatomic) OCFNavigationLink *navigationLink;
@property (readonly, nonatomic) OCFButtonAppearance *buttonAppearance;

/* instance methods */
- (id)expandedButtonWithSubtaskDataProvider:(id)provider;
- (id)buttonWithSizeClass:(long long)_class subtaskDataProvider:(id)provider navigationLinkHandler:(id)handler preferFullWidth:(_Bool)width;
- (id)buttonSpecWithSubtaskDataProvider:(id)provider navigationLinkHandler:(id)handler preferFullWidth:(_Bool)width;
- (long long)preferredButtonSizeClass;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)initWithNavigationLink:(id)link buttonAppearance:(id)appearance;
- (id)expandedButtonWithSubtaskDataProvider:(id)provider expander:(id)expander;

@end

#endif /* OCFButton_h */
