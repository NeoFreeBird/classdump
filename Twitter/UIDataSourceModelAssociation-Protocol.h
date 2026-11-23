//
#ifndef UIDataSourceModelAssociation_Protocol_h
#define UIDataSourceModelAssociation_Protocol_h
@import Foundation;

@protocol UIDataSourceModelAssociation

@required

/* required instance methods */
- (id)modelIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (id)indexPathForElementWithModelIdentifier:(id)identifier inView:(id)view;

@optional

@end

#endif /* UIDataSourceModelAssociation_Protocol_h */
