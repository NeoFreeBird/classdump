//
#ifndef TCRTypeaheadPrompt_h
#define TCRTypeaheadPrompt_h
@import Foundation;

@class NSObject, NSString;

@interface TCRTypeaheadPrompt : NSObject

@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, copy, nonatomic) id /* block */ selectionBlock;

/* instance methods */
- (id)initWithIconName:(id)name titleText:(id)text detailText:(id)text selectionBlock:(id /* block */)block;
- (id)init;

@end

#endif /* TCRTypeaheadPrompt_h */
