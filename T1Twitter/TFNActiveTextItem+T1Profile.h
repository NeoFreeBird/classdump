//
#ifndef TFNActiveTextItem_T1Profile_h
#define TFNActiveTextItem_T1Profile_h
@import Foundation;

@interface TFNActiveTextItem (T1Profile)

/* class methods */
+ (id)emptyItemWithTitle:(id)title descriptionFormat:(id)format activeText:(id)text account:(id)account;
+ (id)sectionFooterItemWithFormat:(id)format linkifiedText:(id)text didTapActiveRangeBlock:(id /* block */)block;
+ (id)sectionItemWithFormat:(id)format linkifiedText:(id)text didTapActiveRangeBlock:(id /* block */)block;
+ (id)_t1_makeActiveTextItemForAttributedString:(id)string linkifiedText:(id)text attributes:(id)attributes textColor:(id)color block:(id /* block */)block;

@end

#endif /* TFNActiveTextItem_T1Profile_h */
