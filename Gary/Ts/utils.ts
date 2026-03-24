export class Utils {

    static getRandomInt(min: number, max: number): number {
        min = Math.ceil(min);
        max = Math.floor(max);
        return Math.floor(Math.random() * (max - min + 1)) + min;
    }

    static getRandomListInt(size: number, min: number, max: number): number[] {
        let list: number[] = [];
        for (let i = 0; i < size; i++) {
            list.push(this.getRandomInt(min, max));
        }
        return list;
    }

    static modificarImpares(list: number[]): void {
        for (let i = 0; i < list.length; i++) {
            if (list[i] % 2 !== 0) {
                list[i] = 0;
            }
        }
    }
    
    }
