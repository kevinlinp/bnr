//
//  BNRItem.h
//  RandomItems
//
//  Created by Kevin Lin on 2/21/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic, readonly, strong) NSDate *dateCreated;
@property (nonatomic, copy) NSString *itemKey;


+ (instancetype)randomItem;

// Designated initalizer
- (instancetype)initWithItemName: (NSString *)name
                  valueInDollars: (int)value
                    serialNumber: (NSString *)sNumber;

- (instancetype)initWithItemName: (NSString *)name;

@end
