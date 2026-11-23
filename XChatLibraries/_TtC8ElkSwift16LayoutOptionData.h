//
#ifndef _TtC8ElkSwift16LayoutOptionData_h
#define _TtC8ElkSwift16LayoutOptionData_h
@import Foundation;

@class ElkSwift.LayoutOptionData.OptionType, ElkSwift.LayoutOptionData.Visibility, _$sSS, _$sSa -> ElkSwift.Pair ElkSwift.LayoutOptionData _$spG ->, _$sSaySSGSg, _$sSh -> ElkSwift.LayoutOptionData.Target, _$syXlXpSg, _$sypSg, _TtCs12_SwiftObject;

@interface ElkSwift.LayoutOptionData : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    Swift.String group;
    [Swift.String]? legacyIds;
    Any? defaultValue;
    Swift.AnyObject.Type? clazz;
    ElkSwift.LayoutOptionData.OptionType type;
    Swift.String name;
    Swift.String optionDescription;
    Swift.Set -> ElkSwift.LayoutOptionData.Target targets;
    Swift.Array -> ElkSwift.Pair ElkSwift.LayoutOptionData _$spG -> dependencies;
    [Swift.String]? choices;
    ElkSwift.LayoutOptionData.Visibility visibility;
    Any? lowerBound;
    Any? upperBound;
}

@end

#endif /* _TtC8ElkSwift16LayoutOptionData_h */
