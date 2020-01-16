//
//  NSURL+Parameters.h
//  NSURL+Parameters
//
//  Created by caoxuerui on 2020/01/16.
//  Copyright (c) 2020 caoxuerui All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Parameters)

@property (nonatomic, strong) NSDictionary *parameters;

- (NSString *)parameterForKey:(NSString *)key;

- (id)objectForKeyedSubscript:(id)key NS_AVAILABLE(10_8, 6_0);

@end
