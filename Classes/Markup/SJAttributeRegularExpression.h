//
//  SJAttributeRegularExpression.h
//  SJAttributesFactory
//
//  Created by BlueDancer on 2017/11/17.
//  Copyright © 2017年 畅三江. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SJAttributeRegularExpression : NSObject

@property (nonatomic, strong) SJAttributeRegularExpression *(^regexp)(void);

@end
