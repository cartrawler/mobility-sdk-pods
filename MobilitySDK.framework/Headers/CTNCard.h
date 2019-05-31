//
//  Card.h
//  CODSDK
//
//  Created by Flann McMorrow on 14/08/2018.
//  Copyright © 2018 CarTrawler. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CTNCard;

@interface CTNCard : NSObject

@property (strong, nonatomic) NSString *cardHolderName;
@property (strong, nonatomic) NSString *cardNumberMasked;
@property (strong, nonatomic) NSString *cardType;
@property (strong, nonatomic) NSString *expireDate;
@property (strong, nonatomic) NSString *token;
@property (strong, nonatomic) CTNCard *cardModel;

- (instancetype)initCard:(NSString *)cardHolderName
                cardNumberMasked:(NSString *)cardNumberMasked
               cardType:(NSString *)cardType
                expireDate:(NSString *)expireDate
                   token:(NSString *)token;


@end
