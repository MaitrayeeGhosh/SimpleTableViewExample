//
//  ViewController.h
//  SimpleTableViewExample
//
//  Created by Maitrayee Ghosh on 18/01/16.
//  Copyright © 2016 Maitrayee Ghosh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    NSArray *dataArray;
}

@property (weak, nonatomic) IBOutlet UITableView *mTableView;

@end

