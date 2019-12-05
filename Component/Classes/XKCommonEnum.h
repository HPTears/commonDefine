//
//  XKCommonEnum.h
//  XKComponentBaseProject
//
//  Created by Jamesholy on 2019/3/11.
//  Copyright © 2019 Jamesholy. All rights reserved.
//

#ifndef XKCommonEnum_h
#define XKCommonEnum_h

typedef NS_ENUM(NSInteger ,XKRelationType) {
    XKRelationNoting = 0, // 没关系
    XKRelationOneWay, // 单向关系, 你关注了他
    XKRelationTwoWay, // 双向关系
    XKRelationThreeWay, // 他关注了你, 你没关注他
};

#endif /* XKCommonEnum_h */
